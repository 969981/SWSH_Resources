/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f8a0; name: FUN_0094f8a0
 */


void FUN_0094f8a0(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  *param_2 = 0;
  if (*param_3 == '\x1f') {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_009424e0(param_1);
  }
  uVar7 = FUN_009424e0(param_1,param_3[1]);
  cVar2 = param_3[0x14];
  lVar11 = *(long *)(param_3 + 0x18);
  uVar8 = FUN_009426f0(param_1);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00942710(param_1), (uVar8 & 1) != 0)) {
    return;
  }
  FUN_00942390(param_1);
  uVar9 = FUN_009319a0();
  uVar8 = FUN_00913dd0(uVar9,param_3[1]);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar8 = FUN_0094fb30(uVar8,uVar12,uVar7);
  if ((uVar8 & 1) != 0) {
    if (cVar2 == '\0') {
      return;
    }
    uVar12 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(uVar7);
    FUN_00936040(uVar12,0x17b,uVar3);
    lVar11 = FUN_00942400(param_1);
    *(undefined1 *)(lVar11 + 0x34) = 1;
    return;
  }
  uVar12 = FUN_009423e0(param_1);
  iVar6 = FUN_00928da0(uVar12,uVar7,*(undefined4 *)(param_3 + 4),*param_3,
                       *(undefined2 *)(param_3 + 0xe),*(undefined4 *)(param_3 + 8));
  if (*(int *)(param_3 + 4) == 9) {
    bVar4 = FUN_008e3700();
    if ((iVar6 < 1) || (bVar4 != 3)) {
      if (iVar6 < 0) goto joined_r0x0094fa10;
      goto LAB_0094fa14;
    }
  }
  else {
    bVar4 = FUN_008e2f50(uVar7,*(int *)(param_3 + 4),iVar6);
    bVar4 = bVar4 & 1;
joined_r0x0094fa10:
    if (bVar4 != 0) {
LAB_0094fa14:
      uVar8 = FUN_008e55a0(uVar7);
      if ((((uVar8 & 1) == 0) || (param_3[0x15] != '\0')) ||
         (cVar5 = FUN_008e0a00(uVar7), cVar5 == *param_3)) {
        uVar12 = FUN_009423e0(param_1);
        uVar8 = FUN_00928ca0(uVar12,uVar7,*(undefined4 *)(param_3 + 4),*param_3,iVar6,param_3[0xc],
                             *(undefined4 *)(param_3 + 0x10));
        if ((uVar8 & 1) != 0) {
          *param_2 = 1;
          return;
        }
        if (cVar2 != '\0') {
          lVar10 = FUN_00942400(param_1);
          *(undefined1 *)(lVar10 + 0x34) = 1;
          uVar12 = FUN_009423e0(param_1);
          FUN_00928c30(uVar12,uVar7,*(undefined4 *)(param_3 + 0x10));
        }
        if (lVar11 == 0) {
          return;
        }
        uVar12 = 4;
      }
      else {
        if (cVar2 != '\0') {
          uVar12 = FUN_009423b0(param_1);
          FUN_00936080(uVar12,uVar7,0x120);
        }
        if (lVar11 == 0) {
          return;
        }
        uVar12 = 3;
      }
      goto LAB_0094facc;
    }
  }
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 != 9) {
      uVar3 = FUN_008e0a00(uVar7);
      uVar12 = FUN_009423b0(param_1);
      if (iVar6 < 1) {
        uVar7 = 0xf0;
      }
      else {
        uVar7 = 0xd4;
      }
      FUN_009360e0(uVar12,uVar7,uVar3,iVar1);
    }
    lVar10 = FUN_00942400(param_1);
    *(undefined1 *)(lVar10 + 0x34) = 1;
  }
  if (lVar11 == 0) {
    return;
  }
  uVar12 = 2;
LAB_0094facc:
  FUN_0094fc90(lVar11,uVar12);
  return;
}


