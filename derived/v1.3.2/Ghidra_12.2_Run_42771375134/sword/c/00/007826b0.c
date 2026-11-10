/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007826b0; name: FUN_007826b0
 */


undefined1  [16] FUN_007826b0(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  
  piVar2 = (int *)*param_1;
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0xe - (long)*piVar2)));
  puVar1 = (uint *)((long)puVar1 + (param_2 >> 0x1e & 0x3fffffffc) + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  auVar3._12_4_ = 0;
  auVar3._0_12_ =
       *(undefined1 (*) [12])((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)))
  ;
  return auVar3;
}


