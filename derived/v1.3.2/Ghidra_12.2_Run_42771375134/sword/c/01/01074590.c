/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01074590; name: FUN_01074590
 */


void FUN_01074590(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_48;
  
  uVar1 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58);
  uVar3 = FUN_0106f4c0(**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),uVar1);
  if ((uVar3 & 0xff) != 0) {
    uVar8 = 0;
    do {
      uVar4 = FUN_0106f650(uVar8,**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),uVar1);
      bVar2 = FUN_0106fd70();
      lVar5 = FUN_0106fd50(uVar8);
      local_48 = *(undefined8 *)(lVar5 + 0x20);
      FUN_00ffd510((float)bVar2,param_1 + 0x100,&local_48);
      uVar6 = FUN_0106f400(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60),uVar4);
      if ((uVar6 & 1) == 0) {
        lVar5 = FUN_0106fc20(uVar4,*(undefined1 *)
                                    (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        local_48 = *(undefined8 *)(lVar5 + 8);
        FUN_00ffd010(param_1 + 0x100,&local_48);
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < (uVar3 & 0xff));
    if (4 < (uVar3 & 0xff)) {
      return;
    }
  }
  do {
    puVar7 = (undefined8 *)FUN_0106fd50(uVar3);
    local_48 = *puVar7;
    lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    uVar3 = uVar3 + 1;
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  } while ((uVar3 & 0xff) < 5);
  return;
}


