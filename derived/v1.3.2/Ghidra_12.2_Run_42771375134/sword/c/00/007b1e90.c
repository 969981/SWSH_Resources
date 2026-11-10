/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b1e90; name: FUN_007b1e90
 */


undefined8 FUN_007b1e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 local_4c [4];
  undefined1 auStack_48 [24];
  
  if (((*(long *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x28) == '\0')) &&
     (*(undefined1 *)(param_1 + 0x28) = 1, *(long *)(param_1 + 0x40) != 0)) {
    plVar3 = (long *)FUN_007ac3d0(1,60000);
    uVar4 = FUN_017b5900(*(undefined8 *)(param_1 + 8),plVar3,param_2,*(undefined8 *)(param_1 + 0x40)
                        );
    if ((uVar4 & 1) != 0) {
      *(long **)(param_1 + 0x10) = plVar3;
      plVar5 = (long *)FUN_017cd750(0x28);
      if (plVar5 == (long *)0x0) {
        return 1;
      }
      *plVar5 = (long)(PTR_DAT_02716960 + 0x10);
      plVar5[1] = param_1;
      puVar1 = PTR_LAB_02716978;
      plVar5[4] = (long)plVar3;
      plVar5[2] = (long)puVar1;
      plVar5[3] = 0;
      FUN_017dee40(plVar3,2);
      FUN_017de4d0(plVar3,plVar5,0,1);
      return 1;
    }
    if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x54) != 0)) &&
       (plVar5 = *(long **)(param_1 + 0x20), plVar5 != (long *)0x0)) {
      uVar2 = FUN_007ae410();
      local_4c[0] = 0;
      FUN_017d0040(auStack_48,local_4c);
      (**(code **)(*plVar5 + 0x28))(plVar5,auStack_48,uVar2);
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return 0;
}


