/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00967220; name: FUN_00967220
 */


void FUN_00967220(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [8];
  ulong local_68;
  ulong uStack_60;
  int local_58;
  ulong local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  
  iVar3 = FUN_00880b40(*(undefined4 *)param_3[1]);
  if (*(char *)((long)param_3 + 0x24) == '\0') {
    if (iVar3 == 4) {
      puVar1 = (undefined4 *)param_3[1];
      uVar2 = param_3[2];
      uVar6 = param_3[3];
      uVar4 = FUN_009423e0();
      local_58 = FUN_0092b970(uVar4,*puVar1,uVar2,uVar6,&local_38);
      if ((local_58 != 0) && (uVar5 = FUN_008e1600(uVar6), (uVar5 & 1) == 0)) {
        local_48[0] = 0;
        local_40 = local_40 & 0xffffffffff000000;
        local_50 = local_38;
        local_44 = 0;
        local_68 = uVar2;
        uStack_60 = uVar6;
        FUN_00942450(param_1);
        uVar4 = FUN_00925400();
        FUN_00967420(uVar4,auStack_70,&local_68);
      }
      return;
    }
    if (iVar3 == 6) {
      local_40 = *param_3;
      local_38 = param_3[1];
      FUN_00942450(param_1);
      uVar4 = FUN_00925350();
      FUN_00966c40(uVar4,local_48,&local_40);
      return;
    }
  }
  return;
}


