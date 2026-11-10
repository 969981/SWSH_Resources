/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c8d0; name: FUN_0103c8d0
 */


bool FUN_0103c8d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if (*(int *)(param_1 + 0x198) == 2) {
    if ((*(long *)(param_1 + 0x88) == 0) || (*(char *)(*(long *)(param_1 + 0x88) + 0x170) == '\0'))
    goto LAB_0103ca00;
    lVar2 = FUN_00d975c0(&local_68,*(undefined8 *)(param_1 + 8));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 400) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 400) = 0;
    }
    *(long *)(param_1 + 400) = lVar2;
    FUN_00788d40(lVar2,param_1 + 0x80);
    FUN_00788e30(*(undefined8 *)(param_1 + 400));
LAB_0103c9f8:
    uVar3 = 3;
  }
  else {
    if (*(int *)(param_1 + 0x198) != 1) goto LAB_0103ca00;
    lVar4 = *(long *)(param_1 + 0x60);
    lVar2 = lVar4 + 0x170;
    uVar1 = FUN_012b4090(lVar2);
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)(lVar4 + 0x68);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x170) == '\0')) goto LAB_0103ca00;
      FUN_012b4da0(auStack_40,*(undefined8 *)(lVar4 + 400),*(undefined8 *)(lVar4 + 0x180));
      local_68 = 0xf5a481a8227490a3;
      local_60 = "tipsdata";
      local_58 = 8;
      FUN_012b4250(auStack_50,auStack_40,&local_68);
      FUN_012b4070(lVar2,auStack_50);
    }
    FUN_0103ca20(param_1);
    uVar1 = FUN_0103cab0(param_1);
    if ((uVar1 & 1) == 0) goto LAB_0103c9f8;
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x198) = uVar3;
LAB_0103ca00:
  return *(int *)(param_1 + 0x198) == 3;
}


