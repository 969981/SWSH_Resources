/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007af150; name: FUN_007af150
 */


undefined8 FUN_007af150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 8) = 1;
    lVar2 = FUN_017cb1d0(0xf0);
    if (lVar2 != 0) {
      FUN_017856b0(lVar2);
    }
    *(long *)(param_1 + 0x18) = lVar2;
    puVar3 = (undefined8 *)FUN_017cb1d0(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
    *(undefined8 **)(param_1 + 0x58) = puVar3;
    puVar3 = (undefined8 *)FUN_017cb1d0(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    puVar3 = (undefined8 *)FUN_017cb1d0(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
    *(undefined8 **)(param_1 + 0x68) = puVar3;
    plVar4 = (long *)FUN_017cb1d0(0x30);
    if (plVar4 != (long *)0x0) {
      *(undefined1 *)(plVar4 + 1) = 0;
      plVar4[4] = 0;
      puVar1 = PTR_DAT_02716890;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (long)(puVar1 + 0x10);
    }
    *(long **)(param_1 + 0x48) = plVar4;
    plVar4 = (long *)FUN_017cb1d0(0x28);
    puVar1 = PTR_DAT_02716898;
    if (plVar4 != (long *)0x0) {
      *(undefined1 *)(plVar4 + 1) = 0;
      *plVar4 = (long)(puVar1 + 0x10);
    }
    *(long **)(param_1 + 0x78) = plVar4;
    puVar3 = (undefined8 *)FUN_017cb1d0(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
    *(undefined8 **)(param_1 + 0x80) = puVar3;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


