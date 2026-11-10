/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141d6f0; name: FUN_0141d6f0
 */


undefined8 FUN_0141d6f0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(code **)(param_1 + 0x6d0) == (code *)0x0) {
    if (*(code **)(param_1 + 0xa30) == (code *)0x0) {
      return 0;
    }
    lVar3 = param_1 + 0xa50;
    (**(code **)(param_1 + 0xa30))(lVar3);
    pcVar1 = *(code **)(param_1 + 0xa38);
    if (pcVar1 == (code *)0x0) {
      return 1;
    }
    puVar2 = (undefined8 *)(param_1 + 0xa30);
  }
  else {
    lVar3 = param_1 + 0x6f0;
    (**(code **)(param_1 + 0x6d0))(lVar3);
    pcVar1 = *(code **)(param_1 + 0x6d8);
    if (pcVar1 == (code *)0x0) {
      return 1;
    }
    puVar2 = (undefined8 *)(param_1 + 0x6d0);
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  (*pcVar1)(lVar3);
  return 1;
}


