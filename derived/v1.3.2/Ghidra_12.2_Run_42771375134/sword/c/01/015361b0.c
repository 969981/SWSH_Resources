/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015361b0; name: FUN_015361b0
 */


int FUN_015361b0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 1;
  do {
    uVar3 = FUN_014ae400(0,iVar7);
    if (uVar3 == 0) {
      uVar3 = FUN_014ae400(1,iVar7);
      if (uVar3 != 0) {
        bVar1 = 0xd3 < uVar3;
        uVar5 = 1;
        goto LAB_01536228;
      }
      uVar3 = FUN_014ae400(2,iVar7);
      if (uVar3 != 0) {
        bVar1 = 0xd2 < uVar3;
        uVar5 = 2;
        goto LAB_01536228;
      }
    }
    else {
      uVar5 = 0;
      bVar1 = 400 < uVar3;
LAB_01536228:
      uVar2 = 0;
      if (!bVar1) {
        uVar2 = uVar3 & 0xffff;
      }
      lVar4 = FUN_01534080(param_1,uVar5,uVar2);
      if ((lVar4 != 0) && ((*(long *)(lVar4 + 0x10) != 0 || (*(long *)(lVar4 + 0x18) != 0)))) {
        iVar6 = iVar6 + 1;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 899) {
      return iVar6;
    }
  } while( true );
}


