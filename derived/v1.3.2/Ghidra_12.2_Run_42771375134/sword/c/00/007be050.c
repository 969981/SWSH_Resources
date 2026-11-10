/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007be050; name: FUN_007be050
 */


void FUN_007be050(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *local_70;
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_DAT_02710860;
  if (*(long *)(param_1 + 0x80) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x130);
    puVar1 = *(undefined8 **)(param_1 + 0x138);
    if (puVar7 != puVar1) {
      puVar3 = puVar7;
      do {
        if (((*(char *)(puVar3 + 3) == '\0') && (*(char *)((long)puVar3 + 0x1c) != '\0')) &&
           (*(char *)((long)puVar3 + 0x1d) != '\0')) {
          return;
        }
        puVar3 = puVar3 + 4;
      } while (puVar1 != puVar3);
      puVar3 = puVar7;
      do {
        if (*(char *)(puVar3 + 3) == '\0' && *(char *)((long)puVar3 + 0x1b) != '\0') {
          return;
        }
        puVar3 = puVar3 + 4;
      } while (puVar1 != puVar3);
      if (puVar7 != puVar1) {
        do {
          while (*(char *)((long)puVar7 + 0x19) != '\0') {
            puVar7 = puVar7 + 4;
            if (puVar1 == puVar7) {
              return;
            }
          }
          plVar6 = *(long **)(param_1 + 0x70);
          puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          FUN_007c0b80(puVar3);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          local_70 = puVar3;
          FUN_0075efb0(auStack_68,plVar6,0,1);
          *(undefined1 *)((long)local_70 + 0x11) = *(undefined1 *)((long)puVar7 + 0x1b);
          FUN_0075f0a0(auStack_68);
          uVar5 = FUN_007be520(*(undefined8 *)(param_1 + 0x80),puVar3,*puVar7);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)((long)puVar7 + 0x19) = 1;
          }
          FUN_0075efb0(&local_70,plVar6,0,1);
          (**(code **)*puVar3)(puVar3);
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar3,0x18,8);
          FUN_0075f0a0(&local_70);
          puVar7 = puVar7 + 4;
        } while (puVar1 != puVar7);
      }
    }
  }
  return;
}


