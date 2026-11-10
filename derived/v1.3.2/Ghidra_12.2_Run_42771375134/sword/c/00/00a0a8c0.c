/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a8c0; name: FUN_00a0a8c0
 */


void FUN_00a0a8c0(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    bVar1 = FUN_009141c0(param_3);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    lVar4 = FUN_00914330(param_3,0);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1,param_2,lVar4);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar4 = FUN_00914330(param_3,1);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1 + 0x20,param_2,lVar4);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar4 = FUN_00914330(param_3,2);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1 + 0x40,param_2,lVar4);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    lVar4 = FUN_00914330(param_3,3);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1 + 0x60,param_2,lVar4);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    lVar4 = FUN_00914330(param_3,4);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1 + 0x80,param_2,lVar4);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    lVar4 = FUN_00914330(param_3,5);
    if (lVar4 != 0) {
      FUN_00a0ab20(param_1 + 0xa0,param_2,lVar4);
    }
    if (bVar1 != 0) {
      uVar5 = 0;
      do {
        if (5 < uVar5) {
LAB_00a0ab14:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_1 + uVar5 * 0x20;
        if (*(long *)(lVar4 + 8) == 0) {
          cVar3 = '\x1f';
          cVar2 = '\x1f';
          if (*(long *)(lVar4 + 0x10) != 0) goto LAB_00a0aa20;
LAB_00a0aa50:
          if (cVar3 != '\x1f') {
LAB_00a0aa30:
            if (*(long *)(lVar4 + 0x10) == 0) {
              cVar3 = '\x1f';
            }
            else {
              cVar3 = FUN_008e0a00();
            }
            uVar6 = 0;
            plVar7 = (long *)(param_1 + 0x18);
            do {
              if (5 < uVar6) goto LAB_00a0ab14;
              if (plVar7[-2] == 0) {
                if (cVar3 == '\x1f') goto LAB_00a0aab4;
              }
              else {
                cVar2 = FUN_008e0a00();
                if (cVar2 == cVar3) {
LAB_00a0aab4:
                  *plVar7 = *(long *)(lVar4 + 8);
                  break;
                }
              }
              uVar6 = uVar6 + 1;
              plVar7 = plVar7 + 4;
            } while (uVar6 < bVar1);
          }
        }
        else {
          cVar2 = FUN_008e0a00();
          cVar3 = cVar2;
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00a0aa50;
LAB_00a0aa20:
          cVar3 = FUN_008e0a00();
          if (cVar2 != cVar3) goto LAB_00a0aa30;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < bVar1);
    }
  }
  return;
}


