/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145d6a0; name: FUN_0145d6a0
 */


void FUN_0145d6a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long local_48;
  
  if (0 < *(int *)(param_1 + 0x410)) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(param_1 + 800 + uVar2 * 8);
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x420);
        uVar5 = *(undefined4 *)(param_1 + 0x414);
        local_48 = 0;
      }
      else {
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = *(undefined8 *)(param_1 + 0x420);
        uVar5 = *(undefined4 *)(param_1 + 0x414);
        local_48 = lVar3;
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      uVar1 = FUN_0144d130(uVar4,uVar5,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if ((uVar1 & 1) != 0) {
        FUN_014647c0(*(undefined8 *)(param_1 + 0x1a8),uVar2 & 0xffffffff);
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x410));
  }
  return;
}


