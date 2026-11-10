/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cfc10; name: FUN_003cfc10
 */


void FUN_003cfc10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if ((*(float *)(lVar1 + 0x1288) != 0.0) && (iVar2 = *(int *)(lVar1 + 0x68), iVar2 != 0)) {
    puVar3 = *(undefined8 **)(lVar1 + 0x38);
    do {
      iVar2 = iVar2 + -1;
      FUN_003f9480(*puVar3,param_2,param_3);
      puVar3 = puVar3 + 1;
    } while (iVar2 != 0);
  }
  return;
}


