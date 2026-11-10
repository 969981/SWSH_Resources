/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067ec00; name: FUN_0067ec00
 */


void FUN_0067ec00(long param_1,long *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_005c47b0(param_3,&DAT_01d38550);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  uVar3 = (**(code **)(*param_2 + 0xa0))(param_2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x70;
  cVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
  do {
    if (cVar2 != '\r') {
      if ((cVar2 == '\n') || (cVar2 == -1)) break;
      uVar3 = *(ulong *)(param_1 + 0x80);
      uVar4 = *(ulong *)(param_1 + 0x88);
      if (uVar4 <= uVar3) {
        if (*(long *)(param_1 + 0xb0) == 0) {
          lVar6 = uVar4 * 2;
          if (lVar6 == 0) {
            lVar6 = 1;
          }
          uVar3 = FUN_005ea2b0(lVar1,lVar6,1);
        }
        else {
          uVar3 = FUN_005ea2b0(lVar1,*(long *)(param_1 + 0xb0) + uVar4,1);
        }
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          goto LAB_0067ed2c;
        }
        uVar3 = *(ulong *)(param_1 + 0x80);
      }
      *(char *)(*(long *)(param_1 + 0x98) + uVar3) = cVar2;
      lVar6 = *(long *)(param_1 + 0x80) + 1;
      *(long *)(param_1 + 0x80) = lVar6;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0x98) + lVar6;
    }
LAB_0067ed2c:
    uVar3 = (**(code **)(*param_2 + 0xa0))(param_2);
    if ((uVar3 & 1) != 0) break;
    cVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
  } while( true );
  uVar3 = *(ulong *)(param_1 + 0x80);
  uVar4 = *(ulong *)(param_1 + 0x88);
  if (uVar3 < uVar4) {
LAB_0067ed6c:
    *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar3) = 0;
    uVar3 = *(long *)(param_1 + 0x80) + 1;
    *(ulong *)(param_1 + 0x80) = uVar3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0xa8) = *(long *)(param_1 + 0x98) + uVar3;
    if (*(ulong *)(param_3 + 0x20) < uVar3) {
      FUN_005c5e00(param_3,uVar3,1);
    }
    cVar2 = *(char *)(param_1 + 0x18);
  }
  else {
    if (*(long *)(param_1 + 0xb0) == 0) {
      lVar6 = uVar4 * 2;
      if (lVar6 == 0) {
        lVar6 = 1;
      }
      uVar3 = FUN_005ea2b0(lVar1,lVar6,1);
    }
    else {
      uVar3 = FUN_005ea2b0(lVar1,*(long *)(param_1 + 0xb0) + uVar4,1);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x80);
      goto LAB_0067ed6c;
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    cVar2 = *(char *)(param_1 + 0x18);
  }
  if (cVar2 == '\0') {
    FUN_005c5330(*(undefined8 *)(param_1 + 0x98),param_3,(long)*(int *)(param_1 + 0xd8));
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x80);
  if (*(ulong *)(param_1 + 0x120) != uVar3) {
    if ((uVar3 < *(ulong *)(param_1 + 0x128)) ||
       (uVar4 = FUN_006801b0(param_1 + 0x110,uVar3,1), (uVar4 & 1) != 0)) {
      *(ulong *)(param_1 + 0x120) = uVar3;
      if (uVar3 != 0) {
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x138);
        *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x138) + uVar3;
        goto LAB_0067ee48;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
LAB_0067ee48:
  uVar5 = FUN_005c4e20(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x138),
                       *(undefined8 *)(param_1 + 0x128));
  FUN_005c47b0(param_3,uVar5);
  return;
}


