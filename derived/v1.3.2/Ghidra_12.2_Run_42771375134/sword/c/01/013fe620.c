/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fe620; name: FUN_013fe620
 */


void FUN_013fe620(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x5cc)) {
  case 0:
    FUN_013fee80(param_1);
    return;
  case 1:
  case 2:
    FUN_008c61d0(*(long *)(param_1 + 0x98),1);
    FUN_008c7d10(*(undefined8 *)(param_1 + 0x98));
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x98),0);
    local_28 = 0x7e6282327890dd21;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x2b0),&local_28);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    *(undefined4 *)(param_1 + 0x78) = 8;
    break;
  case 3:
    FUN_013fed60(param_1);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_013f9d40();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_013fe70c;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
LAB_013fe70c:
    FUN_013fafe0(puVar3,0x2992c264034ea158,1,0);
    *(undefined4 *)(param_1 + 0x78) = 2;
    FUN_008c8520(*(undefined8 *)(param_1 + 0x98));
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x98),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x98),0);
    FUN_013fee80(param_1);
    break;
  case 4:
    FUN_008c8450();
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x78) = 5;
    FUN_013fca20(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x5cc) = 0;
  return;
}


