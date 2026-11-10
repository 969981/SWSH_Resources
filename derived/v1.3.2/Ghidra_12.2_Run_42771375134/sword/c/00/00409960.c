/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409960; name: FUN_00409960
 */


int FUN_00409960(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x288))();
  if (iVar1 == 1) {
    if ((int)param_1[0x18] != 0) {
      puVar2 = (undefined8 *)param_1[0x17];
      do {
        iVar1 = (**(code **)(*(long *)*puVar2 + 0x138))();
        if (iVar1 != 1) {
          for (puVar3 = (undefined8 *)param_1[0x17]; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            (**(code **)(*(long *)*puVar3 + 0x140))();
          }
          (**(code **)(*param_1 + 0x290))(param_1);
          return iVar1;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined8 *)(param_1[0x17] + (ulong)*(uint *)(param_1 + 0x18) * 8));
    }
    iVar1 = 1;
  }
  return iVar1;
}


