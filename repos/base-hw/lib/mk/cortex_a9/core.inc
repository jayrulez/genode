#
# \brief  Build config for Genodes core process
# \author Stefan Kalkowski
# \date   2014-09-02
#

# add include paths
INC_DIR += $(REP_DIR)/src/core/include/spec/cortex_a9

# add C++ sources
SRC_CC += spec/arm/cpu.cc

# include less specific configuration
include $(REP_DIR)/lib/mk/arm_v7/core.inc
