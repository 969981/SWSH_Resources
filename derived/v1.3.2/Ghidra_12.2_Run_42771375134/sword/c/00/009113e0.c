/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009113e0; name: FUN_009113e0
 */


void FUN_009113e0(long param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined2 *)FUN_00915240();
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    FUN_00914680(uVar2,0,*puVar1);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined2 *)FUN_00915240();
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    FUN_00914680(uVar2,1,*puVar1);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined2 *)FUN_00915240();
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    FUN_00914680(uVar2,2,*puVar1);
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined2 *)FUN_00915240();
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    FUN_00914680(uVar2,3,*puVar1);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    return;
  }
  FUN_009c50b0();
  puVar1 = (undefined2 *)FUN_00915240();
  uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
  FUN_00914680(uVar2,4,*puVar1);
  return;
}


