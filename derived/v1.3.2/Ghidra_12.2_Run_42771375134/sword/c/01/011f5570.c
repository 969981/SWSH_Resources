/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f5570; name: FUN_011f5570
 */


void FUN_011f5570(undefined1 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 local_169;
  undefined8 local_161;
  undefined8 local_159;
  undefined8 local_151;
  undefined8 local_149;
  undefined8 local_13d;
  undefined8 local_135;
  undefined8 local_12d;
  undefined8 local_125;
  undefined8 local_11d;
  undefined8 local_115;
  undefined8 local_10d;
  undefined8 local_105;
  undefined8 local_fd;
  undefined4 local_f5;
  undefined1 auStack_e1 [177];
  
  bVar1 = *(char *)(param_2 + 0xf0) != '\0';
  if (bVar1) {
    memcpy(auStack_e1,(void *)(param_2 + 0x100),0xb0);
  }
  bVar2 = *(char *)(param_2 + 0x1b0) != '\0';
  if (bVar2) {
    local_135 = *(undefined8 *)(param_2 + 0x1bc);
    local_13d = *(undefined8 *)(param_2 + 0x1b4);
    local_12d = *(undefined8 *)(param_2 + 0x1c4);
    local_125 = *(undefined8 *)(param_2 + 0x1cc);
    local_11d = *(undefined8 *)(param_2 + 0x1d4);
    local_115 = *(undefined8 *)(param_2 + 0x1dc);
    local_10d = *(undefined8 *)(param_2 + 0x1e4);
    local_105 = *(undefined8 *)(param_2 + 0x1ec);
    local_fd = *(undefined8 *)(param_2 + 500);
    local_f5 = *(undefined4 *)(param_2 + 0x1fc);
  }
  bVar3 = *(char *)(param_2 + 0x200) != '\0';
  if (bVar3) {
    local_169 = *(undefined8 *)(param_2 + 0x208);
    local_161 = *(undefined8 *)(param_2 + 0x210);
    local_159 = *(undefined8 *)(param_2 + 0x218);
    local_151 = *(undefined8 *)(param_2 + 0x220);
    local_149 = *(undefined8 *)(param_2 + 0x228);
  }
  *param_1 = 0;
  param_1[0xc0] = 0;
  param_1[0x110] = 0;
  param_1[0x120] = 0;
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x128) = local_169;
    *(undefined8 *)(param_1 + 0x130) = local_161;
    *(undefined8 *)(param_1 + 0x138) = local_159;
    *(undefined8 *)(param_1 + 0x140) = local_151;
    *(undefined8 *)(param_1 + 0x148) = local_149;
    param_1[0x120] = 1;
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0xcc) = local_135;
    *(undefined8 *)(param_1 + 0xc4) = local_13d;
    *(undefined8 *)(param_1 + 0xec) = local_115;
    *(undefined8 *)(param_1 + 0xe4) = local_11d;
    *(undefined8 *)(param_1 + 0xdc) = local_125;
    *(undefined8 *)(param_1 + 0xd4) = local_12d;
    *(undefined8 *)(param_1 + 0xfc) = local_105;
    *(undefined8 *)(param_1 + 0x104) = local_fd;
    *(undefined4 *)(param_1 + 0x10c) = local_f5;
    *(undefined8 *)(param_1 + 0xf4) = local_10d;
    param_1[0xc0] = 1;
  }
  if (bVar1) {
    memcpy(param_1 + 0x10,auStack_e1,0xb0);
    *param_1 = 1;
  }
  return;
}


