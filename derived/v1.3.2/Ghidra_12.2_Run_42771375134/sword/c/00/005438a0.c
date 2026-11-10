/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005438a0; name: FUN_005438a0
 */


void FUN_005438a0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02713b70 + 0x10;
  *param_1 = (long)puVar2;
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
    puVar2 = (undefined *)*param_1;
    param_1[0xe] = 0;
  }
  (**(code **)(puVar2 + 0x70))(param_1);
  if (((char)param_1[0x18] != '\0') && ((long *)param_1[0x17] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x17] + 0x18))();
    param_1[0x17] = 0;
  }
  if (((char)param_1[0x16] != '\0') && ((long *)param_1[0x15] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x15] + 0x18))();
    param_1[0x15] = 0;
  }
  if (param_1[0x14] != 0) {
    lVar1 = param_1[0x12];
    plVar3 = (long *)param_1[0x13];
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar3;
    param_1[0x14] = 0;
    puVar2 = PTR_PTR_02713988;
    while (plVar3 != param_1 + 0x12) {
      plVar3 = (long *)plVar3[1];
      FUN_005b9b10(*(undefined8 *)puVar2);
    }
  }
  thunk_FUN_005464f0(param_1);
  return;
}


