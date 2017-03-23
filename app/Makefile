####
#### Sample Makefile for building applications with the RIOT OS
####
#### The example file system layout is:
#### ./application Makefile
#### ../../RIOT
####

# Set the name of your application:
APPLICATION = app

# If no BOARD is found in the environment, use this default:
BOARD ?= native

RIOTBOARD ?= $(CURDIR)/../boards

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../../RIOT

# Uncomment this to enable scheduler statistics for ps:
#CFLAGS += -DSCHEDSTATISTICS

# If you want to use native with valgrind, you should recompile native
# with the target all-valgrind instead of all:
# make -B clean all-valgrind

# Uncomment this to enable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
CFLAGS += -DDEVELHELP

# Change this to 0 to show compiler invocation lines by default:
QUIET ?= 1

# Modules to include:

#USEMODULE += shell
#USEMODULE += posix
USEMODULE += xtimer
# we want to use SAUL:
USEMODULE += saul_default
# include the shell:
USEMODULE += shell
USEMODULE += shell_commands
# additional modules for debugging:
USEMODULE += ps

USEMODULE += bmp180
USEMODULE += tsl2561
USEMODULE += at86rf2xx

# Include packages that pull up and auto-init the link layer.
# NOTE: 6LoWPAN will be included if IEEE802.15.4 devices are present
USEMODULE += gnrc_netdev_default
USEMODULE += auto_init_gnrc_netif
# Specify the mandatory networking modules for IPv6 and UDP
USEMODULE += gnrc_ipv6_router_default
USEMODULE += gnrc_udp
# Add a routing protocol
USEMODULE += gnrc_rpl
USEMODULE += auto_init_gnrc_rpl
# This application dumps received packets to STDIO using the pktdump module
USEMODULE += gnrc_pktdump
# Additional networking modules that can be dropped if not needed
USEMODULE += gnrc_icmpv6_echo
# Add also the shell, some shell commands
USEMODULE += netstats_l2
USEMODULE += netstats_ipv6
USEMODULE += netstats_rpl

# If your application is very simple and doesn't use modules that use
# messaging, it can be disabled to save some memory:

#DISABLE_MODULE += core_msg

#export INCLUDES += -Iapplication_include

# Specify custom dependencies for your application here ...
# APPDEPS = app_data.h config.h

include $(RIOTBASE)/Makefile.include

# ... and define them here (after including Makefile.include,
# otherwise you modify the standard target):
#proj_data.h: script.py data.tar.gz
#	./script.py
