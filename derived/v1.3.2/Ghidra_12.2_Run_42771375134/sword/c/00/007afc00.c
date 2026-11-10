/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007afc00; name: FUN_007afc00
 */


undefined8 FUN_007afc00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_48 [24];
  undefined1 local_24 [4];
  
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 8) != '\0')) {
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    (*(undefined8 **)(param_1 + 0x58))[1] = **(undefined8 **)(param_1 + 0x58);
    plVar3 = (long *)FUN_007ac3d0(1,60000);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0xe0))
                      (*(long **)(param_1 + 0x18),plVar3,param_2,0,*(undefined8 *)(param_1 + 0x58));
    if ((uVar4 & 1) != 0) {
      *(long **)(param_1 + 0x20) = plVar3;
      plVar5 = (long *)FUN_017cd750(0x28);
      if (plVar5 == (long *)0x0) {
        return 1;
      }
      *plVar5 = (long)(PTR_DAT_027168a0 + 0x10);
      plVar5[1] = param_1;
      puVar1 = PTR_LAB_027168d0;
      plVar5[4] = (long)plVar3;
      plVar5[2] = (long)puVar1;
      plVar5[3] = 0;
      FUN_017dee40(plVar3,2);
      FUN_017de4d0(plVar3,plVar5,0,1);
      return 1;
    }
    uVar2 = FUN_007ae410();
    local_24[0] = 0;
    FUN_017d0040(auStack_48,local_24);
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,auStack_48,uVar2);
    }
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,auStack_48,uVar2);
    }
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,auStack_48,uVar2);
    }
    plVar5 = *(long **)(param_1 + 0x40);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,auStack_48,uVar2);
    }
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return 0;
}


