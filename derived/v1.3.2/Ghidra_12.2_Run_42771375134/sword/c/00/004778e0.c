/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004778e0; name: FUN_004778e0
 */


int FUN_004778e0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  if (*(uint *)(param_2 + 1) == 0) {
    iVar7 = 1;
  }
  else {
    lVar5 = *param_2;
    lVar1 = lVar5 + (ulong)*(uint *)(param_2 + 1) * 0x20;
    iVar7 = 1;
    do {
      uVar2 = *(uint *)(*(undefined8 **)(lVar5 + 0x18) + 1);
      if (uVar2 != 0) {
        lVar8 = (ulong)uVar2 << 3;
        puVar9 = (undefined8 *)**(undefined8 **)(lVar5 + 0x18);
        do {
          uVar6 = *puVar9;
          iVar4 = FUN_0046ae10(uVar6,lVar5,param_3,*(undefined8 *)(param_1 + 0x18),param_4);
          local_70 = *(undefined8 *)(lVar5 + 8);
          bVar3 = iVar7 != 1;
          iVar7 = 1;
          if (iVar4 != 1 || bVar3) {
            iVar7 = 2;
          }
          _local_68 = CONCAT44(*(undefined4 *)(lVar5 + 0x14),3);
          local_78 = uVar6;
          FUN_004779e0(param_1,&local_78,param_3,param_4);
          lVar8 = lVar8 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar1);
  }
  return iVar7;
}


