/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077ff40; name: FUN_0077ff40
 */


void FUN_0077ff40(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if ((((param_2 & 1) == 0) && ((short)param_1[0x1d] != -0x41ff)) &&
     (*(byte *)(param_1 + 0x13) <= *(byte *)((long)param_1 + 0x9c))) {
    cVar2 = '\0';
    if ((byte)(*(char *)((long)param_1 + 0x9f) + 1U) < *(byte *)(param_1 + 0x13)) {
      cVar2 = *(char *)((long)param_1 + 0x9f) + '\x01';
    }
    *(char *)((long)param_1 + 0x9f) = cVar2;
    FUN_0077f910(param_1);
    (**(code **)(*param_1 + 0x80))(param_1);
    uVar4 = 3;
    *(undefined1 *)((long)param_1 + 0xa1) = 0;
  }
  else {
    if ((char)param_1[0x13] != '\0') {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar5 = param_1[0xb] + lVar6;
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x18);
        *(char *)(param_1[0xb] + lVar6 + 0x92) = (char)uVar7;
        (**(code **)(**(long **)(param_1[0xb] + lVar6) + 0x100))
                  (*(long **)(param_1[0xb] + lVar6),&DAT_0213fa00,0);
        plVar1 = (long *)(param_1[0xb] + lVar6);
        lVar6 = lVar6 + 0xa0;
        lVar5 = *plVar1;
        lVar8 = plVar1[3];
        *(long *)(lVar5 + 0x30) = plVar1[2];
        *(int *)(lVar5 + 0x38) = (int)lVar8;
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(param_1 + 0x13));
    }
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined1 *)((long)param_1 + 0x9f) = 0;
    FUN_0077f910(param_1);
    (**(code **)(*param_1 + 0x80))(param_1);
    uVar3 = FUN_0077d470(param_1[0xf]);
    FUN_0077dad0(uVar3,*(undefined1 *)((long)param_1 + 0x9b));
    uVar4 = 5;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((long)param_1 + 0x114) = 1;
  return;
}


