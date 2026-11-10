/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053b200; name: FUN_0053b200
 */


void FUN_0053b200(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 ulong param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_48;
  long local_28;
  
  lVar5 = *(long *)(param_3 + 0x110);
  *(undefined1 *)(param_3 + 0x895) = 1;
  if (lVar5 == 0) {
LAB_0053b274:
    local_28 = 0;
  }
  else {
    lVar3 = param_3 + 0x110;
    do {
      bVar1 = *(ulong *)(lVar5 + 0x20) < param_5;
      if (!bVar1) {
        lVar3 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
    } while (lVar5 != 0);
    if ((lVar3 == param_3 + 0x110) || (param_5 < *(ulong *)(lVar3 + 0x20))) goto LAB_0053b274;
    lVar5 = *(long *)(lVar3 + 0x28);
    local_28 = lVar5;
    if (lVar5 != 0) goto LAB_0053b2e0;
  }
  plVar6 = (long *)(param_3 + 0xf8);
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
LAB_0053b2b4:
    local_48 = 0;
  }
  else {
    plVar4 = plVar6;
    do {
      if ((ulong)plVar7[4] >= param_5) {
        plVar4 = plVar7;
      }
      plVar7 = (long *)plVar7[(ulong)plVar7[4] < param_5];
    } while (plVar7 != (long *)0x0);
    if ((plVar4 == plVar6) || (param_5 < (ulong)plVar4[4])) goto LAB_0053b2b4;
    local_48 = plVar4[5];
    if (local_48 != 0) {
      lVar5 = 0;
      goto LAB_0053b2e0;
    }
  }
  iVar2 = FUN_00527cc0(param_3,param_5,param_6,param_7,param_8,&local_48,&local_28);
  if (iVar2 < 0) {
    return;
  }
  lVar5 = local_28;
LAB_0053b2e0:
  FUN_005254c0(param_1,param_2,param_3,param_4,lVar5,0,param_9);
  return;
}


