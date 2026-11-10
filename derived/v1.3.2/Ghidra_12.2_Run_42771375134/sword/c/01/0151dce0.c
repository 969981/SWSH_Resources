/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151dce0; name: FUN_0151dce0
 */


void FUN_0151dce0(long param_1,byte param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_2 < 0x12) && (param_3 < 3)) && (param_4 != (undefined8 *)0x0)) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar4 = param_4[2];
    lVar3 = param_1 + (ulong)param_2 * 0x5c + (ulong)param_3 * 0x1c;
    *(undefined4 *)(lVar3 + 0x7c) = *(undefined4 *)(param_4 + 3);
    *(undefined8 *)(lVar3 + 0x74) = uVar4;
    *(undefined8 *)(lVar3 + 0x6c) = uVar2;
    *(undefined8 *)(lVar3 + 100) = uVar1;
  }
  return;
}


