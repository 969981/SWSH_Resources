/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913660; name: FUN_00913660
 */


void FUN_00913660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 7) = *(undefined8 *)((long)param_2 + 7);
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0xf);
  uVar2 = *(undefined8 *)((long)param_2 + 0x17);
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f);
  *(undefined8 *)((long)param_1 + 0x25) = *(undefined8 *)((long)param_2 + 0x25);
  *(undefined8 *)((long)param_1 + 0x1f) = uVar3;
  *(undefined8 *)((long)param_1 + 0x17) = uVar2;
  *(undefined8 *)((long)param_1 + 0xf) = uVar1;
  return;
}


