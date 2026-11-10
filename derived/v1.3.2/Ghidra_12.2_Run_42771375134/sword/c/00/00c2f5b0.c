/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2f5b0; name: FUN_00c2f5b0
 */


void FUN_00c2f5b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  lVar3 = 0;
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  do {
    while( true ) {
      lVar1 = param_1 + lVar3;
      cVar2 = *(char *)((long)param_2 + lVar3 + 0x10);
      if (*(char *)(lVar1 + 0x14) == '\0') break;
      if (cVar2 == '\0') {
        if (*(char *)(lVar1 + 0x1c) != '\0') {
          *(undefined1 *)(lVar1 + 0x1c) = 0;
        }
        *(undefined1 *)(lVar1 + 0x14) = 0;
      }
      else {
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)((long)param_2 + lVar3 + 0x14);
        cVar2 = *(char *)((long)param_2 + lVar3 + 0x18);
        if (*(char *)(lVar1 + 0x1c) == '\0') {
          if (cVar2 != '\0') {
            *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
            *(undefined1 *)(lVar1 + 0x1c) = 1;
          }
        }
        else if (cVar2 == '\0') {
          *(undefined1 *)(lVar1 + 0x1c) = 0;
        }
        else {
          *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
        }
      }
joined_r0x00c2f65c:
      lVar3 = lVar3 + 0x14;
      if (lVar3 == 0x78) goto LAB_00c2f694;
    }
    if (cVar2 == '\0') goto joined_r0x00c2f65c;
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)((long)param_2 + lVar3 + 0x14);
    *(undefined1 *)(lVar1 + 0x1c) = 0;
    if (*(char *)((long)param_2 + lVar3 + 0x18) != '\0') {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
      *(undefined1 *)(lVar1 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar1 + 0x14) = 1;
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 0x78);
LAB_00c2f694:
  uVar4 = param_2[0x11];
  *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x8c) = uVar4;
  return;
}


