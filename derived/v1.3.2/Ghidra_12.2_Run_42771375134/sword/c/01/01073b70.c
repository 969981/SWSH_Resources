/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073b70; name: FUN_01073b70
 */


void FUN_01073b70(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar2 = **(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60);
  cVar3 = FUN_0106f4c0(uVar2,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  if (cVar3 != '\0') {
    uVar7 = 0;
    lVar1 = param_1 + 0x100;
    do {
      uVar5 = FUN_0106f650(uVar7,uVar2,
                           *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      if ((int)uVar5 == param_2) {
        lVar6 = FUN_0106fc20(param_2,*(undefined1 *)
                                      (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_48 = *(undefined8 *)(lVar6 + 0x10);
        FUN_00ffd010(lVar1,&local_48);
        lVar6 = FUN_0106fc20(param_2,*(undefined1 *)
                                      (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_48 = *(undefined8 *)(lVar6 + 0x10);
        lVar6 = FUN_0106fc20(param_2,*(undefined1 *)
                                      (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_50 = *(undefined8 *)(lVar6 + 0x10);
      }
      else {
        lVar6 = FUN_0106fc20(uVar5,*(undefined1 *)
                                    (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_48 = *(undefined8 *)(lVar6 + 0x18);
        FUN_00ffd010(lVar1,&local_48);
        lVar6 = FUN_0106fc20(uVar5 & 0xffffffff,
                             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_48 = *(undefined8 *)(lVar6 + 0x18);
        lVar6 = FUN_0106fc20(uVar5 & 0xffffffff,
                             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_50 = *(undefined8 *)(lVar6 + 0x18);
      }
      FUN_00ffd600(lVar1,&local_50);
      FUN_00ffd510(lVar1,&local_48);
      uVar7 = uVar7 + 1;
      uVar4 = FUN_0106f4c0(uVar2,*(undefined1 *)
                                  (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    } while ((uVar7 & 0xff) < (uVar4 & 0xff));
  }
  return;
}


