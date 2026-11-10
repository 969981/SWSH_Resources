/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01117c20; name: FUN_01117c20
 */


void FUN_01117c20(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_68;
  uint uStack_64;
  undefined1 auStack_60 [8];
  long local_58;
  
  if ((*(undefined8 **)(param_1 + 0x638) != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x638))(), uVar3 != 0)) {
    lVar6 = *(long *)(param_1 + 0x620);
    lVar4 = *(long *)(lVar6 + 0xe8);
    if (lVar4 != 0) {
      *(long *)(lVar6 + 0xe8) = lVar4 - ((lVar4 << 3) >> 3);
      lVar6 = *(long *)(param_1 + 0x620);
    }
    puVar2 = PTR_DAT_02710860;
    uVar5 = 0;
    do {
      while( true ) {
        local_68 = 0;
        uStack_64 = uStack_64 & 0xffffff00;
        uVar1 = *(ulong *)(lVar6 + 0xe8);
        if (*(ulong *)(lVar6 + 0xf0) <= uVar1) break;
        lVar7 = *(long *)(lVar6 + 0xe0);
        uVar8 = *(undefined8 *)(lVar6 + 0xa0);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *(ulong *)(lVar7 + uVar1 * 8) = CONCAT44(uStack_64,local_68);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(lVar6 + 0xe8) = *(long *)(lVar6 + 0xe8) + 1;
        lVar6 = *(long *)(param_1 + 0x620);
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_01117d2c;
      }
      local_58 = *(long *)(lVar6 + 0xe0) + uVar1 * 8;
      FUN_00bb18b0(auStack_60,lVar6 + 0xa0,&local_58,1,&local_68);
      lVar6 = *(long *)(param_1 + 0x620);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
LAB_01117d2c:
    if (*(int *)(lVar6 + 0xe8) != 0) {
      FUN_016bef00(*(undefined8 *)(param_1 + 0x618));
    }
  }
  return;
}


