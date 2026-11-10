/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081cef0; name: FUN_0081cef0
 */


void FUN_0081cef0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  string *psVar6;
  long lVar7;
  long lVar8;
  string *psVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    lVar5 = FUN_008241b0(param_1,iVar2);
    iVar13 = *(int *)param_1[2];
    iVar1 = (int)param_1[1];
    iVar3 = iVar13 - iVar1;
    if (0 < iVar3 && 0 < iVar2) {
      lVar7 = 0;
      do {
        std::string::operator=(*(string **)(lVar5 + lVar7 * 8),*(string **)(lVar10 + 8 + lVar7 * 8))
        ;
        lVar7 = lVar7 + 1;
        if (iVar3 <= lVar7) break;
      } while (lVar7 < iVar2);
    }
    puVar4 = PTR_LAB_02716e80;
    if (iVar3 < iVar2) {
      lVar8 = *param_1;
      lVar7 = (long)iVar3 * 8;
      puVar12 = (undefined8 *)(lVar10 + lVar7);
      if (lVar8 == 0) {
        iVar13 = (iVar1 + iVar2) - iVar13;
        puVar11 = (undefined8 *)(lVar5 + lVar7);
        do {
          puVar12 = puVar12 + 1;
          psVar9 = (string *)*puVar12;
          psVar6 = operator_new(0x18);
          *(undefined8 *)psVar6 = 0;
          *(undefined8 *)(psVar6 + 8) = 0;
          *(undefined8 *)(psVar6 + 0x10) = 0;
          std::string::operator=(psVar6,psVar9);
          iVar13 = iVar13 + -1;
          *puVar11 = psVar6;
          puVar11 = puVar11 + 1;
        } while (iVar13 != 0);
      }
      else {
        iVar13 = (iVar1 + iVar2) - iVar13;
        puVar11 = (undefined8 *)(lVar5 + lVar7);
        do {
          puVar12 = puVar12 + 1;
          psVar9 = (string *)*puVar12;
          psVar6 = (string *)FUN_0080efb0(lVar8,0,0x18);
          *(undefined8 *)(psVar6 + 8) = 0;
          *(undefined8 *)(psVar6 + 0x10) = 0;
          *(undefined8 *)psVar6 = 0;
          FUN_0080eeb0(lVar8,psVar6,puVar4);
          std::string::operator=(psVar6,psVar9);
          iVar13 = iVar13 + -1;
          *puVar11 = psVar6;
          puVar11 = puVar11 + 1;
        } while (iVar13 != 0);
      }
    }
    iVar2 = (int)param_1[1] + iVar2;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)param_1[2] < iVar2) {
      *(int *)param_1[2] = iVar2;
    }
  }
  return;
}


