/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dd7d0; name: FUN_007dd7d0
 */


void FUN_007dd7d0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02716758;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *(long *)PTR_DAT_02716758;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xf8) == 0)) {
LAB_007dd878:
      if (*(long *)(param_1 + 0xf8) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0xf0);
        lVar3 = *(long *)(param_1 + 0xf8) << 5;
        do {
          puVar4 = (undefined8 *)*puVar5;
          *puVar5 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar4,puVar5[2],puVar5[3]);
          }
          puVar5 = puVar5 + 4;
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
        lVar3 = *(long *)(param_1 + 0xf8);
        if (lVar3 != 0) {
          puVar5 = *(undefined8 **)(param_1 + 0xf0);
          do {
            puVar4 = (undefined8 *)*puVar5;
            lVar3 = lVar3 + -1;
            *puVar5 = 0;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar4,puVar5[2],puVar5[3])
              ;
            }
            puVar5 = puVar5 + 4;
          } while (lVar3 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      return;
    }
    lVar6 = *(long *)(lVar3 + 0xf8) << 5;
    puVar5 = *(undefined8 **)(lVar3 + 0xf0);
    do {
      (**(code **)(*(long *)*puVar5 + 0x28))();
      lVar6 = lVar6 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar6 != 0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    do {
      if ((*(long *)puVar2 == 0) || (*(long *)(*(long *)puVar2 + 0xf8) == 0)) goto LAB_007dd878;
      FUN_007dd970(param_1);
      nn::os::SleepThread(100000000);
      uVar1 = *(int *)(param_1 + 0x60) + 1;
      *(uint *)(param_1 + 0x60) = uVar1;
    } while (uVar1 < 0x3a99);
  }
  return;
}


