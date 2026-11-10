/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f8ac0; name: FUN_001f8ac0
 */


void FUN_001f8ac0(long param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_02711068;
  lVar1 = param_2 + 0x60;
  pbVar2 = (byte *)(*(long *)(PTR_DAT_02711068 +
                             (ulong)(*(uint *)(param_2 + 0x68) >> 0x18 & 0xf) * 8 + 0x30) + lVar1 +
                   0xc);
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0x70);
  }
  bVar4 = *pbVar2;
  if ((param_4 & 1) != 0) {
    local_44 = 0xffffffff;
    lVar8 = FUN_001e1570(param_2 + 0x18,&local_44);
    if (lVar8 != 0) {
      FUN_001ca550(lVar8,param_2,0);
    }
  }
  FUN_00207780(param_2 + 0x28,param_1 + 0x2430);
  if ((bVar4 >> 3 & 1) == 0) {
    FUN_001e1720(param_2 + 0x18);
  }
  FUN_001cd8e0(param_1 + 0x10,lVar1,param_3 & 1,
               *(byte *)(*(long *)(puVar6 + ((ulong)*(byte *)(param_2 + 0x6b) & 0xf) * 8 + 0x30) +
                         lVar1 + 0xc) >> 3 & 1);
  uVar5 = *(int *)(param_1 + 0x25f0) - 1;
  uVar3 = *(uint *)(param_2 + 0x50);
  *(uint *)(param_1 + 0x25f0) = uVar5;
  *(undefined8 *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar3 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar5 * 8);
  if ((uVar5 != 0) && (uVar5 != uVar3)) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x25e8) + (ulong)uVar3 * 8);
    iVar7 = (**(code **)(*plVar9 + 0x30))(plVar9);
    if ((iVar7 == 1) || (iVar7 == 0)) {
      *(uint *)(plVar9 + 10) = uVar3;
    }
  }
  return;
}


