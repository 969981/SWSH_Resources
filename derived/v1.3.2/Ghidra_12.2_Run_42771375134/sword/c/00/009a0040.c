/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a0040; name: FUN_009a0040
 */


void FUN_009a0040(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  long local_50;
  undefined2 local_48;
  
  if (*(char *)((long)param_3 + 0x19) == '\0') {
    uVar8 = FUN_009423b0(param_1);
    uVar6 = FUN_008e0a00(param_3[1]);
    FUN_00939090(uVar8,uVar6,0);
  }
  plVar1 = param_3 + 1;
  FUN_008e3830(*plVar1,3);
  if ((char)param_3[3] == '\0') {
    if (*(char *)((long)param_3 + 0x1a) == '\0') {
      if (*(int *)param_3[2] != 0xa5) goto LAB_009a0244;
      goto LAB_009a00ac;
    }
    iVar7 = FUN_008e19c0(param_3[1]);
    if ((iVar7 == *(int *)param_3[2]) || (*(int *)param_3[2] == 0xa5)) goto LAB_009a00ac;
LAB_009a0244:
    cVar5 = FUN_008e2ef0(*plVar1,3);
    if ((cVar5 != '\0') && ((*(byte *)(*param_3 + 4) >> 3 & 1) == 0)) {
      uVar8 = FUN_009423b0(param_1);
      FUN_00937710(uVar8,*plVar1,3,0);
      cVar5 = *(char *)((long)param_3 + 0x1b);
      goto joined_r0x009a0280;
    }
  }
  else {
LAB_009a00ac:
    uVar8 = FUN_009423b0(param_1);
    uVar6 = FUN_008e0a00(param_3[1]);
    FUN_00938870(uVar8,uVar6,(char)param_3[4],*(undefined1 *)(param_3[2] + 0xe),
                 *(undefined1 *)((long)param_3 + 0x19),*(undefined4 *)param_3[2],
                 *(undefined4 *)((long)param_3 + 0x1c));
  }
  cVar5 = *(char *)((long)param_3 + 0x1b);
joined_r0x009a0280:
  if ((cVar5 != '\0') && (iVar7 = FUN_008e2e80(*plVar1), iVar7 != 0x19)) {
    local_50 = *plVar1;
    FUN_00942450(param_1);
    uVar8 = FUN_00925c50();
    FUN_0099eb80(uVar8,auStack_58,&local_50);
  }
  uVar9 = FUN_008e2df0(*plVar1,0xb);
  if ((uVar9 & 1) != 0) {
    uVar8 = FUN_009423b0(param_1);
    uVar6 = FUN_008e0a00(*plVar1);
    FUN_0093a080(uVar8,uVar6,0);
    local_50 = *plVar1;
    local_48 = 0x101;
    FUN_00942450(param_1);
    uVar8 = FUN_009254b0();
    FUN_009489e0(uVar8,auStack_58,&local_50);
  }
  lVar2 = *param_3;
  lVar3 = param_3[1];
  uVar4 = *(undefined1 *)((long)param_3 + 0x19);
  uVar6 = *(undefined4 *)param_3[2];
  uVar8 = FUN_009423e0(param_1);
  FUN_00929d10(uVar8,lVar3,uVar6,uVar4,lVar2);
  uVar8 = FUN_009423b0(param_1);
  uVar6 = FUN_008e0a00(param_3[1]);
  FUN_0093a5c0(uVar8,uVar6,*(undefined4 *)((long)param_3 + 0x1c));
  uVar8 = FUN_009423b0(param_1);
  uVar6 = FUN_008e0a00(param_3[1]);
  FUN_0093a5c0(uVar8,uVar6,*(undefined4 *)param_3[2]);
  return;
}


