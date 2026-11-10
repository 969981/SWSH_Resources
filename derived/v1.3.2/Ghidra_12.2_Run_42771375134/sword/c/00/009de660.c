/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de660; name: FUN_009de660
 */


void FUN_009de660(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0xaed) = 0;
  if (param_4 == 1) {
    uVar2 = FUN_009c9810(1,0);
    uVar3 = FUN_00931920(param_3);
    FUN_008df3f0(uVar3,uVar2);
    FUN_008e15a0();
    cVar1 = FUN_008f94e0();
  }
  else {
    if (param_4 != 5) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xaef);
  }
  *(bool *)(param_1 + 0xaed) = cVar1 == '\0';
  return;
}


