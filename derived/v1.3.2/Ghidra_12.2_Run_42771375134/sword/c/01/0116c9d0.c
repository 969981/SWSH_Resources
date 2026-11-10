/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0116c9d0; name: FUN_0116c9d0
 */


void FUN_0116c9d0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x60), puVar2 != (undefined8 *)0x0)) {
    puVar4 = puVar2 + -10;
    (**(code **)*puVar2)();
    uVar3 = FUN_01168be0();
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN_0119c250(puVar4,0);
      FUN_01164bd0(*(undefined8 *)(param_1 + 0xa0),0,uVar1 & 1);
      uVar1 = FUN_0119c250(puVar4,1);
      FUN_01164bd0(*(undefined8 *)(param_1 + 0xa0),1,uVar1 & 1);
      uVar1 = FUN_0119c250(puVar4,2);
      FUN_01164bd0(*(undefined8 *)(param_1 + 0xa0),2,uVar1 & 1);
      uVar1 = FUN_0119c250(puVar4,3);
      FUN_01164bd0(*(undefined8 *)(param_1 + 0xa0),3,uVar1 & 1);
      FUN_01164ba0(*(undefined8 *)(param_1 + 0xa0));
      return;
    }
  }
  return;
}


