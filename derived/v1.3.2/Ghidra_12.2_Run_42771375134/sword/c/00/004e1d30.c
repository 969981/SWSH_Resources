/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1d30; name: FUN_004e1d30
 */


void FUN_004e1d30(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    if ((param_3 & 1) == 0) {
      do {
        lVar3 = *(long *)(lVar2 + 8);
        uVar1 = FUN_004e2440(lVar2,param_2);
        if ((uVar1 & 1) != 0) {
          (*(code *)**(undefined8 **)(lVar2 + 0x58))((undefined8 *)(lVar2 + 0x58),0xffffffff);
        }
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
    else {
      do {
        lVar3 = *(long *)(lVar2 + 8);
        uVar1 = FUN_004e2440(lVar2,param_2);
        if (((uVar1 & 1) != 0) && (uVar1 = FUN_004e2450(lVar2,param_2), (uVar1 & 1) == 0)) {
          (*(code *)**(undefined8 **)(lVar2 + 0x58))((undefined8 *)(lVar2 + 0x58),0xffffffff);
        }
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
  }
  return;
}


