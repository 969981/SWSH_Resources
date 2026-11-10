/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105a0f0; name: FUN_0105a0f0
 */


void FUN_0105a0f0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  
  lVar5 = *param_1;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_0199c2b0(&local_68);
  uVar2 = FUN_006f82b0(*(undefined8 *)(lVar5 + 0xb0));
  uStack_60 = CONCAT44(uVar2,(undefined4)uStack_60);
  uVar2 = FUN_006f8330(*(undefined8 *)(lVar5 + 0xb0));
  local_58 = CONCAT44(local_58._4_4_,uVar2);
  FUN_0199c2a0(&local_50);
  local_50 = (local_50 >> 0x10 & 0xffff) << 0x10;
  local_38 = 0;
  FUN_0199c2a0(&local_38);
  puVar1 = PTR_DAT_02715500;
  local_38 = (local_38 >> 0x10 & 0xffff) << 0x10;
  FUN_0199de60(*(long *)(*(long *)(lVar5 + 0x60) + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,
               0x80);
  lVar6 = *(long *)(lVar5 + 0x60);
  uVar3 = FUN_006fe990(*(undefined8 *)(lVar5 + 0xb8));
  uVar4 = FUN_006fe990(*(undefined8 *)(lVar5 + 0xb0));
  FUN_0199d3e0(*(long *)(lVar6 + 0x58) + (long)*(int *)puVar1 * 0x170,uVar3,&local_38,0,0,0,uVar4,
               &local_68);
  return;
}


