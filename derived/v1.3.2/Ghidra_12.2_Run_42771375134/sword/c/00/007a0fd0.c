/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a0fd0; name: FUN_007a0fd0
 */


bool FUN_007a0fd0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (((*(byte *)(param_1 + 0x2fa) & 1) == 0) || (*(int *)(param_1 + 0x308) != 2))
  goto LAB_007a10ac;
  if ((*param_3 == 0) || (*(int *)(*param_3 + 0x54) == 0)) {
LAB_007a1034:
    iVar2 = *(int *)(param_1 + 0x370);
  }
  else {
    plVar3 = (long *)FUN_007a0a40(param_3);
    if (*(char *)(param_1 + 0x378) != '\0') {
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
      goto LAB_007a1034;
    }
    if (*(int *)(param_1 + 0x374) == 0) {
      (**(code **)(*plVar3 + 0x38))
                (plVar3,param_2,*(undefined8 *)(param_1 + 0x350),(long)*(int *)(param_1 + 0x370));
      iVar2 = *(int *)(param_1 + 0x370);
    }
    else {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_1 + 0x374);
      iVar2 = *(int *)(param_1 + 0x370);
    }
  }
  if (iVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x350) + lVar4;
      (**(code **)(**(long **)(param_1 + 0x300) + 0x40))
                (*(long **)(param_1 + 0x300),*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while (uVar5 < (ulong)(long)*(int *)(param_1 + 0x370));
  }
  lVar4 = *(long *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x350) = 0;
  if (lVar4 != 0) {
    (**(code **)(**(long **)(param_1 + 0x358) + 0x18))
              (*(long **)(param_1 + 0x358),lVar4,*(undefined8 *)(param_1 + 0x360),
               *(undefined8 *)(param_1 + 0x368));
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  FUN_006d0420(param_1);
  *(undefined1 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
LAB_007a10ac:
  return (*(byte *)(param_1 + 0x2f9) & 1) == 0;
}


