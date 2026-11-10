/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a76dc0; name: FUN_00a76dc0
 */


void FUN_00a76dc0(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined4 *)(param_1 + 0x2de) = 0;
  uVar2 = (**(code **)(*param_1 + 0x728))(param_1,(char)param_1[0x2ea]);
  *(uint *)((long)param_1 + 0x16fc) = uVar2;
  if (*(char *)((long)param_1 + 0x1751) == '\x05') {
    *(undefined4 *)(param_1 + 0x2e0) = 0xff;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x728))(param_1);
    uVar2 = *(uint *)((long)param_1 + 0x16fc);
    *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  }
  if ((uVar2 == 0xff) || (lVar4 = param_1[(ulong)uVar2 + 0xa9], lVar4 == 0)) {
    *(undefined1 *)(param_1 + 0x2e6) = DAT_000004b9;
    iVar1 = *(int *)((long)param_1 + 0x1754);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    *(undefined1 *)(param_1 + 0x2e6) = *(undefined1 *)(lVar4 + 0x4b9);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    iVar1 = *(int *)((long)param_1 + 0x1754);
  }
  if (((iVar1 == 0x99) || (iVar1 == 0x78)) && (*(int *)((long)param_1 + 0x175c) == 1)) {
    *(undefined1 *)(param_1 + 0x2e6) = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
  *(uint *)(param_1 + 0x2e4) = uVar2 & 0xff;
  return;
}


