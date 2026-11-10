/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9ba0; name: FUN_010b9ba0
 */


void FUN_010b9ba0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x240);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(char *)(lVar3 + 0x6c) == '\0') {
    *(undefined1 *)(lVar3 + 0x6c) = 1;
    FUN_010bc320(param_1,0x43bff7fc33f4a292,0,1,1,0);
    *(undefined4 *)(param_1 + 0x7c) = 0x12;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0x23;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
    *(undefined4 *)(param_1 + 0x84) = 5;
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_010aad10();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    *(undefined4 *)puVar4[2] = 2;
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010b9c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


