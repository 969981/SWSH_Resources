/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f92f0; name: FUN_011f92f0
 */


void FUN_011f92f0(undefined8 param_1,int param_2,ulong param_3)

{
  undefined8 local_68 [7];
  ulong local_30;
  
  FUN_011fa600(local_68);
  if ((param_3 & 1) != 0) {
    if (param_2 < 0x5c) {
      if (param_2 == 0x1f) {
        local_30 = 0x5eb9fc36b2ef0c62;
        goto LAB_011f9450;
      }
      if (param_2 == 0x5b) {
        local_30 = 0xa707be2b86bc74c;
        goto LAB_011f9450;
      }
    }
    else {
      if (param_2 == 0x5c) {
        local_30 = 0x144cb2e2be591f01;
        goto LAB_011f9450;
      }
      if (param_2 == 500) {
        local_30 = 0xbef2de80330558ab;
        goto LAB_011f9450;
      }
      if (param_2 == 0x62) {
        local_30 = 0x46f19ce2daa8249f;
        goto LAB_011f9450;
      }
    }
    local_30 = 0x4f19d3e2df2234d4;
    goto LAB_011f9450;
  }
  if (param_2 < 0x5c) {
    if (param_2 == 0x1f) {
      local_30 = 0x8e4fb68dc6531e5d;
      goto LAB_011f9450;
    }
    if (param_2 == 0x5b) {
      local_30 = 0x9a8dc6360863;
    }
    else {
LAB_011f9440:
      local_30 = 0xa28dc63615fb;
    }
  }
  else if (param_2 == 0x5c) {
    local_30 = 0x9b8dc6360a16;
  }
  else {
    if (param_2 == 500) {
      local_30 = 0xf60da1420103d29c;
      goto LAB_011f9450;
    }
    if (param_2 != 0x62) goto LAB_011f9440;
    local_30 = 0xa18dc6361448;
  }
  local_30 = local_30 | 0x8e2d000000000000;
LAB_011f9450:
  local_68[0] = 0x400000000;
  FUN_011fa930(*(undefined8 *)PTR_DAT_02710940,local_68,0);
  return;
}


