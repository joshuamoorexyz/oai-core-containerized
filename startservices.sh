#!/bin/bash

# Start oai_amf
/openair-amf/bin/oai_amf -c /openair-amf/etc/config.yaml -o &

# Start asterisk
asterisk -fp &

# Start oai_nrf
/openair-nrf/bin/oai_nrf -c /openair-nrf/etc/config.yaml -o &

# Start oai_smf
/openair-smf/bin/oai_smf -c /openair-smf/etc/config.yaml -o &

# Start oai_spgwu
/openair-spgwu-tiny/bin/oai_spgwu -c /openair-spgwu-tiny/etc/spgw_u.conf -o &
python3 /openair-spgwu-tiny/bin/entrypoint.py &

# Start oai_udm
/openair-udm/bin/oai_udm -c /openair-udm/etc/config.yaml -o &

# Start oai_udr
/openair-udr/bin/oai_udr -c /openair-udr/etc/config.yaml -o &

# Keep the script running
tail -f /dev/null
