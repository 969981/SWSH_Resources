/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e680; name: FUN_0044e680
 */


void FUN_0044e680(long *param_1,undefined8 param_2,long *param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_60 = param_2;
  FUN_004a4500(param_1,&local_60,1);
  *param_1 = (long)(PTR_DAT_02713010 + 0x10);
  FUN_00479c00(param_1 + 10);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar1 = *(ushort *)((long)param_1 + 0x154) & 0xe000 | (param_4 & 1) << 0xb | 0x29d;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = (long)param_3;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(ushort *)((long)param_1 + 0x154) = uVar1;
  if ((*(byte *)((long)param_3 + 0x9a) & 0xe) == 0) {
    plVar4 = param_3;
    do {
      plVar3 = (long *)plVar4[0x10];
      if ((plVar3 == (long *)0x0) &&
         (plVar3 = (long *)plVar4[0xf], uVar2 = 0, plVar3 == (long *)0x0)) goto LAB_0044e748;
      plVar4 = plVar3;
    } while ((*(byte *)((long)plVar3 + 0x9a) & 0xe) == 0);
  }
  uVar2 = 0x1000;
LAB_0044e748:
  *(ushort *)((long)param_1 + 0x154) = uVar2 | uVar1;
  *(int *)(param_1[2] + 0x50) = *(int *)(param_1[2] + 0x50) + 1;
  (**(code **)(*param_3 + 0x10))(param_3);
  *(undefined4 *)(param_1 + 0x24) = 0x42ca0000;
  return;
}


