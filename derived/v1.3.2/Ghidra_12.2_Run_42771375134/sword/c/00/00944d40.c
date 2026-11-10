/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944d40; name: FUN_00944d40
 */


void FUN_00944d40(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char local_44 [4];
  
  uVar6 = FUN_00944eb0(param_1,*param_3,param_3[1],*(undefined4 *)(param_3 + 2),param_3 + 3,
                       *(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5));
  if ((uVar6 & 0xff) == 0) {
    local_44[0] = '\0';
    uVar9 = *param_3;
    uVar10 = param_3[1];
    uVar2 = *(undefined4 *)(param_3 + 2);
    uVar4 = *(undefined1 *)(param_3 + 4);
    uVar8 = FUN_009423e0(param_1);
    bVar5 = FUN_0092be20(uVar8,uVar9,uVar10,uVar2,uVar4,local_44);
    if (((bVar5 & 1) != 0) && (local_44[0] != '\0' || *(char *)((long)param_3 + 0x2a) != '\0')) {
      uVar9 = FUN_009423e0(param_1);
      FUN_0092bf40(uVar9,param_3[1],*param_3,*(undefined4 *)(param_3 + 2),
                   *(undefined1 *)(param_3 + 4),*(undefined4 *)((long)param_3 + 0x24));
      lVar7 = FUN_00942400(param_1);
      *(undefined1 *)(lVar7 + 0x34) = 1;
    }
    *param_2 = bVar5 & 1;
  }
  else {
    if (*(char *)((long)param_3 + 0x29) != '\0') {
      cVar3 = *(char *)(param_3 + 4);
      if ((((uVar6 & 0xff) != 4) || (cVar3 != '\x05')) || (*(char *)((long)param_3 + 0x2b) == '\0'))
      {
        iVar1 = *(int *)(param_3 + 2);
        if (((uVar6 & 0xff) == 1) && (iVar1 == 0x14)) {
          lVar7 = FUN_00942400(param_1);
          *(undefined1 *)(lVar7 + 0x35) = 1;
        }
        else {
          uVar10 = param_3[1];
          uVar9 = FUN_009423b0(param_1);
          FUN_00936b80(uVar9,uVar10,uVar6,iVar1,cVar3);
          lVar7 = FUN_00942400(param_1);
          *(undefined1 *)(lVar7 + 0x34) = 1;
        }
      }
    }
    *param_2 = 1;
  }
  return;
}


