/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00205d10; name: FUN_00205d10
 */


void FUN_00205d10(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_30 [8];
  undefined4 local_28 [2];
  
  uVar1 = *(uint *)(param_1 + 1) >> 0x1e;
  if (uVar1 == 2) {
    if (*(char *)(*param_1 + 0x1fb9) != '\0') goto LAB_00205dd0;
  }
  else if (uVar1 == 3) {
LAB_00205dd0:
    puVar2 = (undefined4 *)param_1[2];
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_001d1a00(*param_1,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
      param_1[2] = (long)puVar2;
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    puVar2[4] = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    FUN_001d1850(*param_1,param_1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 4;
    return;
  }
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((long)param_1 + 0x44) = param_2[1];
  *(undefined4 *)(param_1 + 9) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x4c) = param_2[3];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x54) = param_2[5];
  local_30[0] = (undefined1)param_1[0xc];
  *(undefined4 *)(param_1 + 0xb) = param_2[6];
  if ((uVar1 != 1) && (param_1[-1] != 0)) {
    local_28[0] = 4;
    FUN_003d9690(param_1[-1] + 0x80,param_1 + 4,local_28,local_30,0);
  }
  return;
}


