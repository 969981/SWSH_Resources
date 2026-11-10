/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0e10; name: FUN_005c0e10
 */


void FUN_005c0e10(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [16];
  long local_40;
  long lStack_38;
  
  lVar5 = param_1 + 0xf70;
  local_40 = lVar5;
  if (*(long *)(param_1 + 0xf88) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    lVar7 = *(long *)(param_1 + 0xf88);
    do {
      lVar3 = FUN_005c56e0(uVar6,*(undefined8 *)(lVar7 + 8),1);
      if (lVar3 < 0) {
        lVar3 = *(long *)(lVar7 + 0x20);
      }
      else {
        lVar3 = FUN_005c56e0(*(undefined8 *)(lVar7 + 8),uVar6,1);
        if (-1 < lVar3) {
          lStack_38 = lVar7;
          FUN_005c0f10(auStack_50,lVar5,&local_40);
          bVar1 = *(byte *)(param_1 + 0xfe0);
          goto joined_r0x005c0ee4;
        }
        lVar3 = *(long *)(lVar7 + 0x28);
      }
    } while ((lVar3 != 0) && (bVar2 = lVar3 != lVar7, lVar7 = lVar3, bVar2));
  }
  lStack_38 = 0;
  bVar1 = *(byte *)(param_1 + 0xfe0);
joined_r0x005c0ee4:
  if ((bVar1 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0xfc0);
    if (lVar5 != 0) {
      plVar4 = *(long **)(param_1 + 4000);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,lVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *(long *)(param_1 + 0xfc0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xfb0) = 0;
  *(undefined8 *)(param_1 + 0xfa8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *(undefined8 *)(param_1 + 0xfc0) = 0;
  *(undefined8 *)(param_1 + 0xfc8) = 0;
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  return;
}


