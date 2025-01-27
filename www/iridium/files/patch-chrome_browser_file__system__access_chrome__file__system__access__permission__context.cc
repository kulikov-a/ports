--- chrome/browser/file_system_access/chrome_file_system_access_permission_context.cc.orig	2022-12-01 10:35:46 UTC
+++ chrome/browser/file_system_access/chrome_file_system_access_permission_context.cc
@@ -256,7 +256,7 @@ const struct {
     {base::DIR_HOME, FILE_PATH_LITERAL("Library/Mobile Documents"),
      kDontBlockChildren},
 #endif
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // On Linux also block access to devices via /dev, as well as security
     // sensitive data in /sys and /proc.
     {kNoBasePathKey, FILE_PATH_LITERAL("/dev"), kBlockAllChildren},
