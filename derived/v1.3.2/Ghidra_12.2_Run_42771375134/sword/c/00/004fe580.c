/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fe580; name: FUN_004fe580
 */


void FUN_004fe580(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = PTR_DAT_027137c8;
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      do {
        *(undefined4 *)(*plVar3 + 0x20) = 0xffffffff;
        lVar2 = *plVar3;
        if (*(short *)(lVar2 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(lVar2 + 0x1c);
          FUN_004ff420(param_1 + 0x38,*(int *)(lVar2 + 8) - *(int *)(param_1 + 0x338),
                       *(undefined4 *)(lVar2 + 0x1c));
          if (lVar2 != 0) {
            FUN_00404870(*(undefined4 *)puVar1,lVar2);
          }
          FUN_004ffe40(*(undefined8 *)(param_1 + 0x360));
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_027137c8);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x344) != -1) {
    FUN_00404950(*(int *)(param_1 + 0x344),*(undefined8 *)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
    FUN_00405710(*(undefined4 *)(param_1 + 0x344));
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}


