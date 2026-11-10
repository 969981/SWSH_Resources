/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b8300; name: FUN_007b8300
 */


void FUN_007b8300(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = *param_2;
  *(undefined8 *)(param_1 + 0x1f8) = uVar4;
  do {
    while( true ) {
      lVar1 = param_1 + lVar3;
      cVar2 = *(char *)((long)param_2 + lVar3 + 0x10);
      if (*(char *)(lVar1 + 0x200) == '\0') break;
      if (cVar2 == '\0') {
        if (*(char *)(lVar1 + 0x208) != '\0') {
          *(undefined1 *)(lVar1 + 0x208) = 0;
        }
        *(undefined1 *)(lVar1 + 0x200) = 0;
      }
      else {
        *(undefined4 *)(lVar1 + 0x204) = *(undefined4 *)((long)param_2 + lVar3 + 0x14);
        cVar2 = *(char *)((long)param_2 + lVar3 + 0x18);
        if (*(char *)(lVar1 + 0x208) == '\0') {
          if (cVar2 != '\0') {
            *(undefined8 *)(lVar1 + 0x20c) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
            *(undefined1 *)(lVar1 + 0x208) = 1;
          }
        }
        else if (cVar2 == '\0') {
          *(undefined1 *)(lVar1 + 0x208) = 0;
        }
        else {
          *(undefined8 *)(lVar1 + 0x20c) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
        }
      }
joined_r0x007b83b0:
      lVar3 = lVar3 + 0x14;
      if (lVar3 == 0x78) goto LAB_007b83ec;
    }
    if (cVar2 == '\0') goto joined_r0x007b83b0;
    *(undefined4 *)(lVar1 + 0x204) = *(undefined4 *)((long)param_2 + lVar3 + 0x14);
    *(undefined1 *)(lVar1 + 0x208) = 0;
    if (*(char *)((long)param_2 + lVar3 + 0x18) != '\0') {
      *(undefined8 *)(lVar1 + 0x20c) = *(undefined8 *)((long)param_2 + lVar3 + 0x1c);
      *(undefined1 *)(lVar1 + 0x208) = 1;
    }
    *(undefined1 *)(lVar1 + 0x200) = 1;
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 0x78);
LAB_007b83ec:
  uVar4 = param_2[0x11];
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x278) = uVar4;
  return;
}


