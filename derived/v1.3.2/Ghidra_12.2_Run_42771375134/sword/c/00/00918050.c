/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918050; name: FUN_00918050
 */


void FUN_00918050(uint *param_1,ushort param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 *puVar7;
  int local_38;
  
  if (0xbd < ((uint)param_3 & 0xffff)) {
    return;
  }
  bVar1 = (&DAT_0214a848)[param_3 & 0xffff];
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if ((bVar1 == 0x20) || (bVar1 == 0x10)) {
    uVar3 = 9;
  }
  else {
    uVar3 = (ulong)bVar1 & 0xf;
    if ((int)uVar3 == 0) goto LAB_00918178;
  }
  local_38 = -0x28;
  puVar4 = &local_90;
  puVar7 = (undefined4 *)register0x00000008;
  do {
    if (local_38 < 0) {
      iVar5 = local_38 + 8;
      if (0 < iVar5) goto LAB_00918158;
      puVar6 = (undefined4 *)((long)&local_90 + (long)local_38);
      local_38 = iVar5;
    }
    else {
      iVar5 = local_38;
LAB_00918158:
      puVar6 = puVar7;
      local_38 = iVar5;
      puVar7 = puVar7 + 2;
    }
    uVar3 = uVar3 - 1;
    *(undefined4 *)puVar4 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar4 + 4);
  } while (uVar3 != 0);
LAB_00918178:
  if ((param_2 != 0xffff) && (((uint)param_3 & 0xffff) < 0xbe)) {
    uVar2 = *param_1;
    *param_1 = (uint)param_2;
    param_1[1] = (uint)(ushort)param_1[1];
    FUN_00916c20(param_1,param_3 & 0xffffffff,(ulong)bVar1,&local_90);
    *param_1 = (uint)(ushort)uVar2;
  }
  return;
}


