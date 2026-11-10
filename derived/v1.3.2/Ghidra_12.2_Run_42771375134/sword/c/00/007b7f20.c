/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7f20; name: FUN_007b7f20
 */


void FUN_007b7f20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  ushort uStack_ae;
  char acStack_a4 [4];
  char acStack_a0 [4];
  char acStack_9c [8];
  char local_94 [20];
  undefined1 local_80;
  undefined1 local_6c;
  undefined1 local_58;
  undefined1 local_44;
  undefined1 local_30;
  uint7 uStack_2f;
  undefined2 local_28;
  
  lVar2 = 0;
  cVar4 = '\0';
  local_94[0] = '\0';
  local_80 = 0;
  local_6c = 0;
  local_58 = 0;
  local_44 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(ulong *)(param_1 + 0x1f8) = (ulong)uStack_ae << 0x10;
  lVar3 = param_1;
  if (*(char *)(param_1 + 0x200) != '\0') goto LAB_007b7fa4;
  do {
    lVar1 = lVar2;
    if (cVar4 != '\0') {
      *(undefined4 *)(lVar3 + 0x204) = *(undefined4 *)(acStack_a0 + lVar2 + -4);
      *(undefined1 *)(lVar3 + 0x208) = 0;
      if (acStack_a0[lVar2] != '\0') {
        *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_a0 + lVar2 + 4);
        *(undefined1 *)(lVar3 + 0x208) = 1;
      }
      *(undefined1 *)(lVar3 + 0x200) = 1;
    }
    while( true ) {
      if (lVar1 == 100) {
        *(ulong *)(param_1 + 0x278) = (ulong)uStack_2f << 8;
        *(undefined2 *)(param_1 + 0x1f8) = 0xffff;
        *(undefined2 *)(param_1 + 0x280) = 0;
        *(undefined1 *)(param_1 + 0x4f3) = 1;
        FUN_007a81a0(*(undefined8 *)PTR_DAT_027104a0,1);
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        return;
      }
      lVar2 = lVar1 + 0x14;
      cVar4 = local_94[lVar1];
      lVar3 = param_1 + lVar2;
      if (*(char *)(lVar3 + 0x200) == '\0') break;
LAB_007b7fa4:
      lVar1 = lVar2;
      if (cVar4 == '\0') {
        if (*(char *)(lVar3 + 0x208) != '\0') {
          *(undefined1 *)(lVar3 + 0x208) = 0;
        }
        *(undefined1 *)(lVar3 + 0x200) = 0;
      }
      else {
        *(undefined4 *)(lVar3 + 0x204) = *(undefined4 *)(acStack_a0 + lVar2 + -4);
        if (*(char *)(lVar3 + 0x208) == '\0') {
          if (acStack_a0[lVar2] != '\0') {
            *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_a0 + lVar2 + 4);
            *(undefined1 *)(lVar3 + 0x208) = 1;
          }
        }
        else if (acStack_a0[lVar2] == '\0') {
          *(undefined1 *)(lVar3 + 0x208) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_a0 + lVar2 + 4);
        }
      }
    }
  } while( true );
}


