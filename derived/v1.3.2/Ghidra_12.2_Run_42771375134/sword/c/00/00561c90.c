/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00561c90; name: FUN_00561c90
 */


int FUN_00561c90(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0;
  local_58 = (undefined4 *)0x0;
  if ((*param_2 | param_4) >> 0x20 != 0) {
    return -10000;
  }
  local_88 = param_4 & 0xffffffff;
  local_80 = 0;
  local_70 = *param_2 & 0xffffffff;
  local_38 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_50 = &LAB_0055ff00;
  local_48 = FUN_0055ff30;
  local_90 = param_3;
  uStack_78 = param_1;
  local_58 = (undefined4 *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0xab10,"../src/GPU/miniz.c",0x3f2,0);
  if (local_58 == (undefined4 *)0x0) {
    return -4;
  }
  *local_58 = 0;
  *(undefined8 *)(local_58 + 0xabe) = 0;
  local_58[0x2ac3] = 1;
  *(undefined8 *)(local_58 + 0xac0) = 1;
  local_58[0xac2] = 0xf;
  iVar2 = FUN_0055ff40(&local_90,4);
  if (iVar2 != 1) {
    if (local_58 != (undefined4 *)0x0) {
      (*local_48)(local_40);
    }
    iVar1 = -3;
    if ((int)local_88 != 0 || iVar2 != -5) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  *param_2 = local_68;
  if (local_58 == (undefined4 *)0x0) {
    return 0;
  }
  (*local_48)(local_40);
  return 0;
}


