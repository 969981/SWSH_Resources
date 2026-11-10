/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b9320; name: FUN_007b9320
 */


void FUN_007b9320(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 local_c8;
  undefined2 local_c0;
  ushort uStack_be;
  undefined4 uStack_bc;
  undefined1 local_b8;
  char acStack_b4 [4];
  char acStack_b0 [4];
  char acStack_ac [8];
  char local_a4 [20];
  undefined1 local_90;
  undefined1 local_7c;
  undefined1 local_68;
  undefined1 local_54;
  undefined1 local_40;
  uint7 uStack_3f;
  undefined2 local_38;
  
  local_c0 = 0;
  uStack_bc = 0;
  lVar2 = 0;
  cVar4 = '\0';
  local_b8 = 0;
  local_a4[0] = '\0';
  local_90 = 0;
  local_7c = 0;
  local_68 = 0;
  local_54 = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(ulong *)(param_1 + 0x1f8) = (ulong)uStack_be << 0x10;
  lVar3 = param_1;
  if (*(char *)(param_1 + 0x200) != '\0') goto LAB_007b93a8;
  do {
    lVar1 = lVar2;
    if (cVar4 != '\0') {
      *(undefined4 *)(lVar3 + 0x204) = *(undefined4 *)(acStack_b0 + lVar2 + -4);
      *(undefined1 *)(lVar3 + 0x208) = 0;
      if (acStack_b0[lVar2] != '\0') {
        *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_b0 + lVar2 + 4);
        *(undefined1 *)(lVar3 + 0x208) = 1;
      }
      *(undefined1 *)(lVar3 + 0x200) = 1;
    }
    while( true ) {
      if (lVar1 == 100) {
        *(ulong *)(param_1 + 0x278) = (ulong)uStack_3f << 8;
        *(undefined2 *)(param_1 + 0x280) = 0;
        *(undefined1 *)(param_1 + 0x4f3) = 1;
        *(undefined2 *)(param_1 + 0x1f8) = 0xffff;
        uVar5 = *(undefined8 *)PTR_DAT_027104a0;
        local_c8 = 0;
        FUN_018724d0((ulong)&local_c8 | 4);
        local_c8 = CONCAT71(local_c8._1_7_,1);
        FUN_007a8040(uVar5,&local_c8);
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        return;
      }
      lVar2 = lVar1 + 0x14;
      cVar4 = local_a4[lVar1];
      lVar3 = param_1 + lVar2;
      if (*(char *)(lVar3 + 0x200) == '\0') break;
LAB_007b93a8:
      lVar1 = lVar2;
      if (cVar4 == '\0') {
        if (*(char *)(lVar3 + 0x208) != '\0') {
          *(undefined1 *)(lVar3 + 0x208) = 0;
        }
        *(undefined1 *)(lVar3 + 0x200) = 0;
      }
      else {
        *(undefined4 *)(lVar3 + 0x204) = *(undefined4 *)(acStack_b0 + lVar2 + -4);
        if (*(char *)(lVar3 + 0x208) == '\0') {
          if (acStack_b0[lVar2] != '\0') {
            *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_b0 + lVar2 + 4);
            *(undefined1 *)(lVar3 + 0x208) = 1;
          }
        }
        else if (acStack_b0[lVar2] == '\0') {
          *(undefined1 *)(lVar3 + 0x208) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(acStack_b0 + lVar2 + 4);
        }
      }
    }
  } while( true );
}


